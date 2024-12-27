/* Keybinds for the rest of the DE */

#include <X11/Xlib.h>

#define MODKEY Mod4Mask

void SpawnBrowser(Display* dpy, char* KeyString) {
	if ()
	XGrabKey(dpy, XKeysymToKeycode(dpy, XStringToKeysym(KeyString)), MODKEY,
		DefaultRootWindow(dpy), True, GrabModeAsync, GrabModeAsync);	
}
