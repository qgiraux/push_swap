#!/bin/bash

# Function to generate a random integer within a specified range
generate_random_number() {
    echo $((RANDOM))
}

# Ensure the array has unique elements
generate_unique_numbers() {
    local array=()
    while [ "${#array[@]}" -lt 10 ]; do
        local number=$(generate_random_number)
        if ! [[ " ${array[@]} " =~ " $number " ]]; then
            array+=("$number")
        fi
    done
    echo "${array[@]}"
}

# Main script
random_numbers=($(generate_unique_numbers))

# Print the result
echo "List of 10 unique random integers:"
echo "${random_numbers[@]}"