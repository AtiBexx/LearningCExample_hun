#!/bin/bash

# Kiírja, hogy mi a státusz
git status

# Hozzáad minden változást (új fájl, módosított, törölt)
git add .

# Commitol egy fix üzenettel (ez változtatható)
git commit -m "Add new files and folders"

# Feltolja a változásokat a main ágra
git push origin main
