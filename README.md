# csci205-final
An introduction to the IOT using the Raspberry Pi and the GPIO interface. Demonstrates c/c++ programming, use of a web server, HTML, and server-side scripting using PHP to interact with various hardware components (DS18B20 temp sensors and LEDs).

A rough outline of necessary steps thus far:

+ Create a fresh repo on Git
+ License it.In regards to the licensing assigned to my project, check out: 
		https://www.gnu.org/licenses/quick-guide-gplv3.html

+ Set static IP on pi
+ Enable SSH interface on PI
+ SSH in

+ Install wiringPi: sudo apt-get install wiringpi

+ Install VIM (the default editor I want git to utilize): sudo apt-get install vim

+ Install git for repo work: sudo apt-get install git-all

+ Verify installation: git --version

+ Set global identity, every commit with have the following data baked in: git config --global user.name "Your Name". AND THEN: git config --global user.email yourEmail@whateverdomain.com

+ Set default Git Editor: git config --global core.editor vim

+ Check your settings: <i>git config --list</i>

+ Clone the repo we created earlier to our Pi: sudo git clone URL-TO-YOUR-REPO

+ Remember to check status of any/all your files with: git status
