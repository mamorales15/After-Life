#!/bin/sh
# This file was generated based on '../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/targets/android/gradle-build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e

export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_73.jdk/Contents/Home"

export SCRIPT_DIR="`dirname "$0"`"

echo "## 2/2: After Life.apk"

cd "$SCRIPT_DIR/"
if [ ! -d "/Users/martinmorales/Library/Android/sdk/cmake" ]; then
    echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android'. Expected to find cmake in /Users/martinmorales/Library/Android/sdk/cmake" >&2
    exit 1
fi

##if (#(RELEASE:Defined) && !#(Project.Android.Key.Store:IsSet))
#echo "## Release build specified with no Key info in the unoproj. Defaulting to debug.keystore"
#if [ ! -f "./#(APK.DefaultKeystore)" ]; then
#    $JAVA_HOME/bin/keytool -genkey -v -keystore #(APK.DefaultKeystore) -alias androiddebugkey -storepass android -keypass android -keyalg RSA -validity 14000 -dname "CN=Unknown, OU=Unknown, O=Unknown, L=Unknown, ST=Unknown, C=Unknown"
#fi
##endif

##if #(AltBuildPath:IsSet)
#./gradlew clean
##endif
./gradlew assembleDebug

cd "$SCRIPT_DIR"

##if !#(LIBRARY:Defined)
ln -sf app/build/outputs/apk/app-debug.apk "After Life.apk"
##endif
