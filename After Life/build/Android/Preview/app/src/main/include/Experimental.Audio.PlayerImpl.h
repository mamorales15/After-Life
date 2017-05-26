// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Audio{struct PlayerImpl;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Experimental{
namespace Audio{

// internal sealed class PlayerImpl :304
// {
uType* PlayerImpl_typeof();
void PlayerImpl__Create_fn(void** __retval);
void PlayerImpl__CreateSoundFromBundle_fn(void* handle_, uString* path_, ::g::Uno::IO::Stream* stream_, void** __retval);
void PlayerImpl__PlaySound_fn(void* handle_, void* sound_, bool* loop_, void** __retval);
void PlayerImpl__Shutdown_fn();
void PlayerImpl__Startup_fn();

struct PlayerImpl : uObject
{
    static void* Create();
    static void* CreateSoundFromBundle(void* handle_, uString* path_, ::g::Uno::IO::Stream* stream_);
    static void* PlaySound(void* handle_, void* sound_, bool loop_);
    static void Shutdown();
    static void Startup();
};
// }

}}} // ::g::Experimental::Audio
