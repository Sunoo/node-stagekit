#include <napi.h>
#include "stagekit/stagekit.h"

Napi::Value stagekit_init(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    char* filename = NULL;
    
    if (info.Length() > 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }
    else if (info.Length() == 1)
    {
        if (info[0].IsString()) {
            filename = const_cast<char*>(info[0].As<Napi::String>().Utf8Value().c_str());
        }
        else if (!info[0].IsNull())
        {
            Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
            return env.Null();
        }
    }

    return Napi::Number::New(env, sk_init(filename));
}

Napi::Value stagekit_send_raw_value(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 2) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    uint left = info[0].As<Napi::Number>().Uint32Value();
    uint right = info[1].As<Napi::Number>().Uint32Value();

    return Napi::Number::New(env, send_raw_value(left, right));
}

Napi::Value stagekit_close(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_close();
    return env.Null();
}

Napi::Value stagekit_alloff(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_alloff();
    return env.Null();
}

Napi::Value stagekit_nostrobe(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_nostrobe();
    return env.Null();
}

Napi::Value stagekit_slowstrobe(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_slowstrobe();
    return env.Null();
}

Napi::Value stagekit_medstrobe(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_medstrobe();
    return env.Null();
}

Napi::Value stagekit_faststrobe(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_faststrobe();
    return env.Null();
}

Napi::Value stagekit_fasteststrobe(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_fasteststrobe();
    return env.Null();
}

Napi::Value stagekit_fogon(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_fogon();
    return env.Null();
}

Napi::Value stagekit_fogoff(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() > 0) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    sk_fogoff();
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

    int leds = info[0].As<Napi::Number>().Int32Value();

    sk_setred(leds);
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

    int leds = info[0].As<Napi::Number>().Int32Value();

    sk_setyellow(leds);
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

    int leds = info[0].As<Napi::Number>().Int32Value();

    sk_setgreen(leds);
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

    int leds = info[0].As<Napi::Number>().Int32Value();

    sk_setblue(leds);
    return env.Null();
}

Napi::Value stagekit_setleds(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() != 4) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    if (!info[0].IsNumber() || !info[1].IsNumber() || !info[2].IsNumber() || !info[3].IsNumber()) {
        Napi::TypeError::New(env, "Wrong argument type").ThrowAsJavaScriptException();
        return env.Null();
    }

    int red = info[0].As<Napi::Number>().Int32Value();
    int yellow = info[1].As<Napi::Number>().Int32Value();
    int green = info[2].As<Napi::Number>().Int32Value();
    int blue = info[3].As<Napi::Number>().Int32Value();

    sk_setleds(red, yellow, green, blue);
    return env.Null();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "sk_init"), Napi::Function::New(env, stagekit_init));
    exports.Set(Napi::String::New(env, "send_raw_value"), Napi::Function::New(env, stagekit_send_raw_value));
    exports.Set(Napi::String::New(env, "sk_close"), Napi::Function::New(env, stagekit_close));
    exports.Set(Napi::String::New(env, "sk_alloff"), Napi::Function::New(env, stagekit_alloff));
    exports.Set(Napi::String::New(env, "sk_nostrobe"), Napi::Function::New(env, stagekit_nostrobe));
    exports.Set(Napi::String::New(env, "sk_slowstrobe"), Napi::Function::New(env, stagekit_slowstrobe));
    exports.Set(Napi::String::New(env, "sk_medstrobe"), Napi::Function::New(env, stagekit_medstrobe));
    exports.Set(Napi::String::New(env, "sk_faststrobe"), Napi::Function::New(env, stagekit_faststrobe));
    exports.Set(Napi::String::New(env, "sk_fasteststrobe"), Napi::Function::New(env, stagekit_fasteststrobe));
    exports.Set(Napi::String::New(env, "sk_fogon"), Napi::Function::New(env, stagekit_fogon));
    exports.Set(Napi::String::New(env, "sk_fogoff"), Napi::Function::New(env, stagekit_fogoff));
    exports.Set(Napi::String::New(env, "sk_setred"), Napi::Function::New(env, stagekit_setred));
    exports.Set(Napi::String::New(env, "sk_setyellow"), Napi::Function::New(env, stagekit_setyellow));
    exports.Set(Napi::String::New(env, "sk_setgreen"), Napi::Function::New(env, stagekit_setgreen));
    exports.Set(Napi::String::New(env, "sk_setblue"), Napi::Function::New(env, stagekit_setblue));
    exports.Set(Napi::String::New(env, "sk_setleds"), Napi::Function::New(env, stagekit_setleds));
    return exports;
}

NODE_API_MODULE(addon, Init)