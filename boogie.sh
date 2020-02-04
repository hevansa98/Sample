#!/bin/bash
#adds new changes and pushes them to the git
#saves me 2 lines of typing

git add .
git commit -m "boogie commit! $1"
git push
