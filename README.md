Showing how someone could hook into Notification Center and determine whether nor not they want to show a notification

Tricks used to figure this out:

* Frida tracing:
	
	```
	sudo frida-trace -m "-[NC* *]" -p `toppid NotificationCenter`
	```


Then I did a class dump on NotificationCenter and fixed up the header for NCBanner, used a swizzle library and swizzled the NCBannerWindowController insertBanner method.



To use or see this in action:

* SIP must be disabled for dylib injection
* Easiest way to get this dylib into NotificationCenter is with dylib injection so go and build injector at: https://github.com/bebrws/injector

Then take that binary and put it in your path somewhere

* Next add the funciton toppid to your .bash_profile or .zshrc

function toppid() { ps -ef | grep $1 | grep -v grep | awk '{ if (NR == 1) print $2 }'  }

This function just greps out the process id given a process name

* Then build this repo and run:

sudo injector `toppid NotificationCenter` ~/repos/SelectiveNotifications/Build/Products/Debug/SelectiveNotifications.bundle/Contents/MacOS/SelectiveNotifications



Now whenever a notification of the banner style happens you will get an alert prior to it showing




