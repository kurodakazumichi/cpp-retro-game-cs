#pragma once

#define SAFE_DELETE(p) { delete (p); (p) = 0;}
#define SAFE_DELETE_ARRAY(p) { delete[] (p); (p) = 0; }