// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Audio{struct ChannelImpl;}}}

namespace g{
namespace Experimental{
namespace Audio{

// internal sealed class ChannelImpl :115
// {
uType* ChannelImpl_typeof();
void ChannelImpl__ReleaseChannel_fn(void* handle_);
void ChannelImpl__ResetChannel_fn(void* handle);

struct ChannelImpl : uObject
{
    static void ReleaseChannel(void* handle_);
    static void ResetChannel(void* handle);
};
// }

}}} // ::g::Experimental::Audio
