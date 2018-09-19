package com.sinkinchan.nativesocketdemo.callback;

import android.app.Activity;
import android.support.v4.app.Fragment;

import com.sinkinchan.nativesocketdemo.callback.base.CommandCallback;
import com.sinkinchan.nativesocketdemo.proto.SDKCommandProto;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class CommandFactory {

    static HashMap<String, CommandCallback> callBacks = new HashMap<>();

    public static void addSDKCommandCallBack(Activity activity, CommandCallback callBack) {
        if (activity != null && callBack != null) {
            callBacks.put(activity.getClass().getSimpleName(), callBack);
        }
    }

    public static void addSDKCommandCallBack(Fragment fragment, CommandCallback callBack) {
        if (fragment != null && callBack != null) {
            callBacks.put(fragment.getClass().getSimpleName(), callBack);
        }
    }

    public static void removeSDKCommandCallBack(Activity activity) {
        if (activity != null) {
            String key = activity.getClass().getSimpleName();
            if (callBacks.containsKey(key)) {
                callBacks.remove(key);
            }
        }
    }

    public static void removeSDKCommandCallBack(Fragment fragment) {
        if (fragment != null) {
            String key = fragment.getClass().getSimpleName();
            if (callBacks.containsKey(key)) {
                callBacks.remove(key);
            }
        }
    }

    public static void onCommand(SDKCommandProto.SDKCommand command) {
        if (callBacks != null) {
            for (Iterator ite = callBacks.entrySet().iterator(); ite.hasNext(); ) {
                Map.Entry entry = (Map.Entry) ite.next();
                CommandCallback callBack = (CommandCallback) entry.getValue();
                callBack.onCommand(command);

            }
        }
    }
}
