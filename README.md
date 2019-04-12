# csci205-final
An introduction to the IOT using the Raspberry Pi and the GPIO interface. Demonstrates c/c++ programming, use of a web server, HTML, and server-side scripting using PHP to interact with various hardware components (DS18B20 temp sensors and LEDs).

A rough outline of necessary steps thus far:

+ Create a fresh repo on Git
+ License it.In regards to the licensing assigned to my project, check out: 
		https://www.gnu.org/licenses/quick-guide-gplv3.html

+ Set static IP on pi
+ Enable SSH interface on PI
+ SSH in

+ Install wiringPi: <i>sudo apt-get install wiringpi</i>

+ Install VIM (the default editor I want git to utilize): <i>sudo apt-get install vim</i>

+ Install git for repo work: <i>sudo apt-get install git-all</i>

+ Verify installation: <i>git --version</i>

+ Set global identity, every commit with have the following data baked in: <i>git config --global user.name "Your Name"</i> AND THEN: <i>git config --global user.email yourEmail@whateverdomain.com</i>

+ Set default Git Editor: <i>git config --global core.editor vim</i>

+ Check your settings: <i>git config --list</i>

+ Clone the repo we created earlier to our Pi: <i>sudo git clone URL-TO-YOUR-REPO</i>

+ Remember to check status of any/all your files with: <i>git status</i>
