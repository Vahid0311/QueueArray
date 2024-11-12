#ifndef MICROPHONECODES_H
#define MICROPHONECODES_H

const int maxQueueSize = 35;
int micQueue[maxQueueSize];
int front = -1;
int rear = -1;

String micOnCodes[35] = {
  "fe110001fc", "fe110002fc", "fe110003fc", "fe110004fc", "fe110005fc",
  "fe110006fc", "fe110007fc", "fe110008fc", "fe110009fc", "fe11000afc",
  "fe11000bfc", "fe11000cfc", "fe11000dfc", "fe11000efc", "fe11000ffc",
  "fe110010fc", "fe110011fc", "fe110013fc", "fe110014fc", "fe110015fc",
  "fe110016fc", "fe110017fc", "fe110018fc", "fe110019fc", "fe11001afc",
  "fe11001bfc", "fe11001cfc", "fe11001dfc", "fe11001efc", "fe11001ffc",
  "fe110020fc", "fe110021fc", "fe110022fc", "fe110023fc"
};

String micOffCodes[35] = {
  "fe110101fc", "fe110102fc", "fe110103fc", "fe110104fc", "fe110105fc",
  "fe110106fc", "fe110107fc", "fe110108fc", "fe110109fc", "fe11010afc",
  "fe11010bfc", "fe11010cfc", "fe11010dfc", "fe11010efc", "fe11010ffc",
  "fe110110fc", "fe110111fc", "fe110117fc", "fe110113fc", "fe110114fc",
  "fe110115fc", "fe110116fc", "fe110117fc", "fe110118fc", "fe110119fc",
  "fe11011afc", "fe11011bfc", "fe11011cfc", "fe11011dfc", "fe11011efc",
  "fe11011ffc", "fe110120fc", "fe110121fc", "fe110122fc", "fe110123fc"
};

String ptzPositions[36] = {
  "ff010007000008", // پوزیشن صفر
  "ff010007000109", "ff01000700020a", "ff01000700030b", "ff01000700040c", "ff01000700050d",
  "ff01000700060e", "ff01000700070f", "ff010007000810", "ff010007000911", "ff010007000a12",
  "ff010007000b13", "ff010007000c14", "ff010007000d15", "ff010007000e16", "ff010007000f17",
  "ff010007001018", "ff010007001119", "ff01000700121a", "ff01000700131b", "ff01000700141c",
  "ff01000700151d", "ff01000700161e", "ff01000700171f", "ff010007001820", "ff010007001921",
  "ff010007001a22", "ff010007001b23", "ff010007001c24", "ff010007001d25", "ff010007001e26",
  "ff010007001f27", "ff010007002028", "ff010007002129", "ff01000700222a", "ff01000700232b"
};

#endif // MICROPHONECODES_H
