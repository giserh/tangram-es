#pragma once

#include "platform.h"

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#ifdef __OBJC__
#import "TGMapViewController.h"
void init(TGMapViewController* _controller);
#endif
