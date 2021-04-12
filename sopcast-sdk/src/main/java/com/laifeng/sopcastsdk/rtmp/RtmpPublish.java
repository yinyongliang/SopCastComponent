package com.laifeng.sopcastsdk.rtmp;



public class RtmpPublish {

    static {
        System.loadLibrary("rtmper");
    }

    public native static void init(String url,int width,int height);


    public native static void stop();

}
