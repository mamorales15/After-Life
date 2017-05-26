sealed class AfterLife_accessor_Song_Label: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new AfterLife_accessor_Song_Label();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Label";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((Song)obj).Label; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Song)obj).SetLabel((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class AfterLife_accessor_Song_File: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new AfterLife_accessor_Song_File();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "File";
    public override global::Uno.Type PropertyType { get { return typeof(Uno.UX.FileSource); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((Song)obj).File; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Song)obj).SetFile((Uno.UX.FileSource)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class AfterLife_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public AfterLife_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class AfterLife_FusePlaySound_File_Property: Uno.UX.Property<Uno.UX.FileSource>
{
    [Uno.WeakReference] readonly Fuse.PlaySound _obj;
    public AfterLife_FusePlaySound_File_Property(Fuse.PlaySound obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.FileSource Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.PlaySound)obj).File; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.FileSource v, global::Uno.UX.IPropertyListener origin) { ((Fuse.PlaySound)obj).File = v; }
}
sealed class AfterLife_Song_Label_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Song _obj;
    public AfterLife_Song_Label_Property(Song obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Song)obj).Label; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Song)obj).SetLabel(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class AfterLife_Song_File_Property: Uno.UX.Property<Uno.UX.FileSource>
{
    [Uno.WeakReference] readonly Song _obj;
    public AfterLife_Song_File_Property(Song obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.FileSource Get(global::Uno.UX.PropertyObject obj) { return ((Song)obj).File; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.FileSource v, global::Uno.UX.IPropertyListener origin) { ((Song)obj).SetFile(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
