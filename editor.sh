#!/usr/bin/env bash
# Helper to run the Unreal Editor from the command line
# Designed specifically for NixOS, and requires steam to be installed

# steam-run gives the steam runtime, which has all the libraries we need
exec steam-run ~/ue5/Engine/Binaries/Linux/UnrealEditor "$PWD/Team3ShotInTheDark/Team3ShotInTheDark.uproject" "$@"
