# CURL GUIDE

# Use a cookie
curl -b [COOKIE PATH] [WEBSITE]

## Send POST and save cookie
curl [WEBSITE]--data "username=example&password=example" -c cookie

## Send JSON POST and save cookie
curl -H "Content-Type: application/json" [WEBSITE] --data '{ "username" : "admin';--"}' -c cookie
