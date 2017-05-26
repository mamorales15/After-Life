// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AfterLife_Song_File_Property;}
namespace g{struct Song;}

namespace g{

// internal sealed class AfterLife_Song_File_Property :47
// {
::g::Uno::UX::Property1_type* AfterLife_Song_File_Property_typeof();
void AfterLife_Song_File_Property__ctor_3_fn(AfterLife_Song_File_Property* __this, ::g::Song* obj, ::g::Uno::UX::Selector* name);
void AfterLife_Song_File_Property__Get1_fn(AfterLife_Song_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void AfterLife_Song_File_Property__New1_fn(::g::Song* obj, ::g::Uno::UX::Selector* name, AfterLife_Song_File_Property** __retval);
void AfterLife_Song_File_Property__get_Object_fn(AfterLife_Song_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AfterLife_Song_File_Property__Set1_fn(AfterLife_Song_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);
void AfterLife_Song_File_Property__get_SupportsOriginSetter_fn(AfterLife_Song_File_Property* __this, bool* __retval);

struct AfterLife_Song_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Song*> _obj;

    void ctor_3(::g::Song* obj, ::g::Uno::UX::Selector name);
    static AfterLife_Song_File_Property* New1(::g::Song* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
