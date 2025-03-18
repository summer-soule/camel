#!/bin/bash

# What: add header at beggining of exercise or programming project source file
# Why:	lazy to add it by hand
#
# TODO: 
# - check if header already exists (do nothing if true)



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
	if [ -f ${target} ]; then
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
		echo "File $target exists! Adding header..."
		echo "$header_ex" | cat - "$target" | tee $target
		echo "Header added! Exiting..."
	fi
}

addheader_proj() {
	if [ -f ${target} ]; then
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
		echo "File $target exists! Adding header..."
		echo "$header_proj" | cat - "$target" | tee $target
		echo "Header added! Exiting..."
	fi
}

target="./src/"

while getopts ":p:s:P:e:h" option; do
	case "$option" in
		h)
			display_help
			exit 0
			;;
		p) 
			target+="part${OPTARG}/"
			;;
		s) 
			target+="section${OPTARG}/"
			;;
		e) 
			target+="ex${OPTARG}.c"
			addheader_ex
			;;
		P) 
			target+="projects/project${OPTARG}.c"
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
