var stagekit = require('bindings')('stagekit-api.node');

module.exports.Open = stagekit.sk_init;
module.exports.Close = stagekit.sk_close;

module.exports.AllOff = stagekit.sk_alloff;
module.exports.NoStrobe = stagekit.sk_nostrobe;
module.exports.SlowStrobe = stagekit.sk_slowstrobe;
module.exports.MedStrobe = stagekit.sk_medstrobe;
module.exports.FastStrobe = stagekit.sk_faststrobe;
module.exports.FastestStrobe = stagekit.sk_fasteststrobe;
module.exports.FogOn = stagekit.sk_fogon;
module.exports.FogOff = stagekit.sk_fogoff;

module.exports.SetRed = stagekit.sk_setred;
module.exports.SetYellow = stagekit.sk_setyellow;
module.exports.SetGreen = stagekit.sk_setgreen;
module.exports.SetBlue = stagekit.sk_setblue;

module.exports.SetLeds = stagekit.sk_setleds;