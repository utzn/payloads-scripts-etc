#!/bin/bash
# A script which verifies whether a given input was strictly alphanumeric.

isValidAlphaNum() {
    validchars="$(echo $1 | sed -e 's/[:alnum:]]//g')"
    if ["validchars" = "$1" ]; then
        return 0
    else
        return 1
    fi
}

echo -n "Please enter String to be validated: "
read input

if [!isValidAlphaNum "input"]; then
    echo "Input wasn't strictly alphanumeric." >&2
    exit 1
else
    echo "Input was valid."
fi

exit 0