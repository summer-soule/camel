#!/bin/bash

# What: add header into exercise or programming project source file
# Why:	lazy to add it by hand
#
# TODO: 
# - check if header already exists (do nothing if true)

header="/* 
 *
 * Task: 
 *
 * Date: $(date '+%Y-%m-%d')
 * Time: $(date '+%I:%M %p')
 *
 */"

usage="$(basename "$0") usage:
[[-p number] [-s number] [-e number]]
[[-p number] [-P number]]

Example output:

/* 
 *
 * Task: 
 *
 * Date: $(date '+%Y-%m-%d')
 * Time: $(date '+%I:%M %p')
 *
 */

Required:
	-p 		part
	-s		section
	-e		exercise
	-P		project
Optional:
	-h		show help message"

while getopts ":p:s:P:e:h" option; do
	case "$option" in
		h)
			echo ${usage}
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
			;;
		P) 
			target+="projects/project${OPTARG}.c"
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

target="./src/$target"

if [ -f ${target} ]; then
	echo "File $target exists! Adding header..."
	echo $header | cat - "$target" | tee $target
	echo "Header added! Exiting..."
fi
