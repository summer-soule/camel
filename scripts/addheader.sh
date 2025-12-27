#!/bin/bash

# What: add header at beggining of exercise or programming project source file
# Why:	lazy to add it by hand
#
# TODO:
# - check if header already exists (do nothing if true)

DIR=$(pwd)
TARGET="./src/"

display_help() {
	echo "$(basename "$0") usage:"
	echo "[[-p number] [-s number] [-e number]]"
	echo "[[-p number] [-P number]]"
	echo
	echo "Example exercise output:"
	echo
	echo "$header_ex"
	echo
	echo "Required:"
	echo "  -p  part"
	echo "  -s  section"
	echo "  -e  exercise"
	echo "  -P  project"
	echo "Optional:"
	echo "	-h	show help message"
}

addheader_ex() {
if [ ! -f ${TARGET} ]; then
	echo "target ${TARGET} not found! creating new..."
	mkdir -p $(dirname ${TARGET})
	touch ${TARGET}
fi

if [ $(stat -c %s "${TARGET}") -eq 0 ]; then
	local header_ex="/*
 *
 * Task:
 *
 * Date: "$(date '+%Y-%m-%d')"
 * Time: "$(date '+%I:%M %p')"
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	exit(EXIT_SUCCESS);
}"
		echo "File ${TARGET} exists! Adding header..."
		echo "$header_ex" | cat - "${TARGET}" | tee $TARGET
		echo "Header added! Exiting..."
else
	echo "target ${TARGET} exists and not empty!"
fi
}

addheader_proj() {
if [ ! -f ${TARGET} ]; then
	echo "target ${TARGET} not found! creating new..."
	mkdir -p $(dirname ${TARGET})
	touch ${TARGET}
fi

if [ $(stat -c %s "${TARGET}") -eq 0 ]; then
	local header_proj="/*
 *
 * Project "$1".
 *
 * Task:
 *
 * Date: "$(date '+%Y-%m-%d')"
 * Time: "$(date '+%I:%M %p')"
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	exit(EXIT_SUCCESS);
}"
		echo "File ${TARGET} exists! Adding header..."
		echo "$header_proj" | cat - "${TARGET}" | tee ${TARGET}
		echo "Header added! Exiting..."
fi

#if [MODULE]; then
#	local makefile_proj="CC := /usr/bin/gcc
#CFLAGS := -Wall -std=c99 -g -O0
}

	while getopts ":p:s:P:e:h" option; do
		case "$option" in
			h)
				display_help
				exit 0
				;;
			p)
				TARGET+="part${OPTARG}/"
				;;
			s)
				TARGET+="section${OPTARG}/"
				;;
			e)
				TARGET+="ex${OPTARG}.c"
				addheader_ex
				;;
			P)
				TARGET+="projects/project${OPTARG}.c"
				echo $proj_num
				addheader_proj "${OPTARG}"
				;;
			:)
				echo "Option -${OPTARG} requires an argument."
				exit 1
				;;
			?)
			echo "Invalid option: -${OPTARG}."
			exit 1
			;;
		esac
	done
