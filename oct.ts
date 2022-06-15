var cur = Math.floor(Date.now()/1000);
var past = cur - 1633060800;
var day = past / 86400;
var day = Math.round(day);

console.log("its october", day);

