#!/bin/bash
#Bash script that displays size of the body response
curl -s "$1" | wc -c
