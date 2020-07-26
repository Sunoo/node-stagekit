#include <napi.h>

extern "C" {
    #include "../stagekit/stagekit.h"
}

Napi::Value stagekit_init(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();

    char* filename = NULL;
    
    if (info.Length() > 1)
    {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }
    else if (info.Length() == 1)
    {
        if (info[0].IsString()) {
            filename = const_cast<char*>(info[0].As<Napi::String>().Utf8Value().c_str());
        }
        else if (!(info[0].IsNull() || info[0].IsUndefined()))
        {
            Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
            return env.Null();
        }
    }
    
    char* foundfile = NULL;
    char* errorStr = NULL;

    int error = sk_init(filename, &foundfile, &errorStr);
    if (error == 0)
    {
        return Napi::String::New(env, foundfile);
    }
    else
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
        return env.Null();
    }
}

Napi::Value stagekit_send_raw_value(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 2) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    uint left = info[0].As<Napi::Number>().Uint32Value();
    uint right = info[1].As<Napi::Number>().Uint32Value();
    
    char* errorStr = NULL;

    int error = send_raw_value(left, right, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_close(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    char* errorStr = NULL;

    int error = sk_close(&errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_alloff(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    char* errorStr = NULL;

    int error = sk_alloff(&errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_setstrobe(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    uint speed = info[0].As<Napi::Number>().Uint32Value();

    char* errorStr = NULL;

    int error = sk_setstrobe(speed, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_setfog(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    bool fog = info[0].As<Napi::Boolean>().Value();

    char* errorStr = NULL;

    int error = sk_setfog(fog, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_setred(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    if (!info[0].IsNumber()) {
        Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
        return env.Null();
    }

    int red = info[0].As<Napi::Number>().Int32Value();

    char* errorStr = NULL;

    int error = sk_setred(red, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_setyellow(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    if (!info[0].IsNumber()) {
        Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
        return env.Null();
    }

    int yellow = info[0].As<Napi::Number>().Int32Value();

    char* errorStr = NULL;

    int error = sk_setyellow(yellow, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_setgreen(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    if (!info[0].IsNumber()) {
        Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
        return env.Null();
    }

    int green = info[0].As<Napi::Number>().Int32Value();

    char* errorStr = NULL;

    int error = sk_setgreen(green, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Value stagekit_setblue(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    if (!info[0].IsNumber()) {
        Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
        return env.Null();
    }

    int blue = info[0].As<Napi::Number>().Int32Value();

    char* errorStr = NULL;

    int error = sk_setblue(blue, &errorStr);
    if (error != 0)
    {
        Napi::Error::New(env, errorStr).ThrowAsJavaScriptException();
    }
    return env.Null();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "Open"), Napi::Function::New(env, stagekit_init));
    //exports.Set(Napi::String::New(env, "SendRawValue"), Napi::Function::New(env, stagekit_send_raw_value));
    exports.Set(Napi::String::New(env, "Close"), Napi::Function::New(env, stagekit_close));
    exports.Set(Napi::String::New(env, "AllOff"), Napi::Function::New(env, stagekit_alloff));
    exports.Set(Napi::String::New(env, "SetStrobe"), Napi::Function::New(env, stagekit_setstrobe));
    exports.Set(Napi::String::New(env, "SetFog"), Napi::Function::New(env, stagekit_setfog));
    exports.Set(Napi::String::New(env, "SetRed"), Napi::Function::New(env, stagekit_setred));
    exports.Set(Napi::String::New(env, "SetYellow"), Napi::Function::New(env, stagekit_setyellow));
    exports.Set(Napi::String::New(env, "SetGreen"), Napi::Function::New(env, stagekit_setgreen));
    exports.Set(Napi::String::New(env, "SetBlue"), Napi::Function::New(env, stagekit_setblue));
    return exports;
}

NODE_API_MODULE(addon, Init)