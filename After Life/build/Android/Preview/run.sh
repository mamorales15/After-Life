#!/bin/sh
# This file was generated based on '../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/targets/android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "./"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.afterlife"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.afterlife"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "After Life.apk" \
    --package=com.apps.afterlife \
    --activity=AfterLife \
    --sym-dir="app/src/main/.uno" \
    "$@"
