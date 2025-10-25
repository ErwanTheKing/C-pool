#!/bin/bash
cut -d":" -f 5 | cut -d" " -f 2 |cut -d"-" -f 1 | grep -icE "\b$1"
