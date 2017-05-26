// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Audio{struct Sound;}}}

namespace g{
namespace Experimental{
namespace Audio{

// public sealed class Sound :164
// {
uType* Sound_typeof();
void Sound__ctor__fn(Sound* __this, void* handle);
void Sound__ClosingEvent_fn(Sound* __this, int* newState);
void Sound__get_Handle_fn(Sound* __this, void** __retval);
void Sound__set_Handle_fn(Sound* __this, void* value);
void Sound__New1_fn(void* handle, Sound** __retval);
void Sound__Reset_fn(Sound* __this);

struct Sound : uObject
{
    void* _handle;

    void ctor_(void* handle);
    void ClosingEvent(int newState);
    void* Handle();
    void Handle(void* value);
    void Reset();
    static Sound* New1(void* handle);
};
// }

}}} // ::g::Experimental::Audio
