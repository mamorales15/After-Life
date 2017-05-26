[Uno.Compiler.UxGenerated]
public partial class Song: Fuse.Controls.Button
{
    string _field_Label;
    [global::Uno.UX.UXOriginSetter("SetLabel")]
    public string Label
    {
        get { return _field_Label; }
        set { SetLabel(value, null); }
    }
    public void SetLabel(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Label)
        {
            _field_Label = value;
            OnPropertyChanged("Label", origin);
        }
    }
    Uno.UX.FileSource _field_File;
    [global::Uno.UX.UXOriginSetter("SetFile")]
    public Uno.UX.FileSource File
    {
        get { return _field_File; }
        set { SetFile(value, null); }
    }
    public void SetFile(Uno.UX.FileSource value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_File)
        {
            _field_File = value;
            OnPropertyChanged("File", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> temp1_File_inst;
    global::Uno.UX.Property<string> this_Label_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> this_File_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static Song()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Song()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.This();
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AfterLife_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, AfterLife_accessor_Song_Label.Singleton);
        this_Label_inst = new AfterLife_Song_Label_Property(this, __selector1);
        this_File_inst = new AfterLife_Song_File_Property(this, __selector2);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.This();
        var temp1 = new global::Fuse.PlaySound();
        temp1_File_inst = new AfterLife_FusePlaySound_File_Property(temp1, __selector2);
        var temp5 = new global::Fuse.Reactive.Property(temp4, AfterLife_accessor_Song_File.Singleton);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Gestures.Pressed();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp1_File_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Read);
        temp.FontSize = 16f;
        temp.Color = float4(0.06666667f, 0.06666667f, 0.06666667f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp6);
        temp7.Actions.Add(temp1);
        temp7.Bindings.Add(temp8);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Label_inst);
        __g_nametable.Properties.Add(this_File_inst);
        this.Children.Add(temp);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Label";
    static global::Uno.UX.Selector __selector2 = "File";
}
