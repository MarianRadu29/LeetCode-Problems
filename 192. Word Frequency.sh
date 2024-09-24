#!/bin/bash

input_file="words.txt"

formatted_words=$(cat "$input_file" | tr -s ' ' '\n') # dau replace la ' ' cu newline

sorted_words=$(echo "$formatted_words" | sort) # fac o lista cu echo si le sortez

unique_words=$(echo "$sorted_words" | uniq -c) # elimin cuvintele duplicate

sorted_unique_words=$(echo "$unique_words" | sort -rn)

echo "$sorted_unique_words" | while read -r count word;
do
    echo "$word $count"
done
