package com.foreign.Fuse.Audio;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import android.net.Uri;
import android.content.Context;
import android.media.AudioTrack;
import android.media.MediaPlayer;
import android.media.MediaDataSource;
import android.content.res.AssetFileDescriptor;
import com.uno.UnoBackedByteBuffer;

public class SoundPlayer
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AfterLife", (message==null ? "null" : message.toString()));
    }

    public static void PlaySoundFromAFD367(final Object afd)
    {
        final AssetFileDescriptor fd = (AssetFileDescriptor)afd;
        final MediaPlayer mp = new MediaPlayer();
        try
        {
        	mp.setDataSource(fd.getFileDescriptor(), fd.getStartOffset(), fd.getLength());
        	fd.close();
        	mp.prepare();
        }
        catch (Throwable e)
        {
        	com.fuse.AndroidInteropHelper.UncheckedThrow(e);
        	return;
        }
        mp.setOnCompletionListener(new MediaPlayer.OnCompletionListener() {
        	@Override
        	public void onCompletion(MediaPlayer mediaPlayer) {
        		mediaPlayer.reset();
        		mediaPlayer.release();
        	}
        });
        mp.start();
    }
    
    public static void PlaySoundFromByteArrayInner368(final Object unoStream)
    {
        InputStream inStream = (InputStream)unoStream;
        Context context = com.fuse.Activity.getRootActivity();
        File file = null;
        try {
        	file = File.createTempFile("tmp",".wav", context.getCacheDir());
        	file.deleteOnExit();
        	FileOutputStream out = new FileOutputStream(file);
        	byte[] buffer = new byte[1024];
        	int read;
        	while ((read = inStream.read(buffer)) != -1) {
        		out.write(buffer, 0, read);
        	}
        	out.close();
        	inStream.close();
        } catch (IOException e) {
        	e.printStackTrace();
        }
        if(file==null) return;
        
        final File fileToPlay = file;
        final MediaPlayer mp = MediaPlayer.create(context, Uri.fromFile(fileToPlay));
        mp.setOnCompletionListener(new MediaPlayer.OnCompletionListener() {
        	@Override
        	public void onCompletion(MediaPlayer mediaPlayer) {
        		mediaPlayer.reset();
        		mediaPlayer.release();
        		fileToPlay.delete();
        	}
        });
        mp.start();
    }
    
    public static void PlaySoundFromMediaDataSource369(final Object mediaDataSource)
    {
        final MediaDataSource mds = (MediaDataSource)mediaDataSource;
        final MediaPlayer mp = new MediaPlayer();
        try
        {
        	mp.setDataSource(mds);
        	mp.prepare();
        }
        catch (Throwable e)
        {
        	com.fuse.AndroidInteropHelper.UncheckedThrow(e);
        	return;
        }
        mp.setOnCompletionListener(new MediaPlayer.OnCompletionListener() {
        	@Override
        	public void onCompletion(MediaPlayer mediaPlayer) {
        		mediaPlayer.reset();
        		mediaPlayer.release();
        	}
        });
        mp.start();
    }
    
}
