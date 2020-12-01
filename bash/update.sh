#!/bin/bash

test_server="8.8.8.8"
timeout="1"

echo "Testing network connection..."

conn_test() {
    ping $test_server -c 1 -w $timeout > ping.tmp
    sleep $timeout
    if [ "$(wc -l ping.tmp)" == "6 ping.tmp" ]; then
        echo 0  
    else
        echo 1
    fi
    rm ping.tmp
}

res=$(conn_test)

if [ "$res" == "0" ]; then
    echo "Connection established."
    # Add error handling for commands below
    apt-get update > /dev/null
    apt-get upgrade -y > /dev/null
    echo "Done! All installed packages have been updated."
else
    echo "Could not connect to $test_server. Check connection." >&2
fi