# csci205-final
An introduction to the IOT using the Raspberry Pi and the GPIO interface. Demonstrates c/c++ programming, use of a web server, HTML, and server-side scripting using PHP to interact with various hardware components (DS18B20 temp sensors and LEDs).

<b>A rough outline of necessary steps thus far:</b>

+ Create a fresh repo on Git
+ License it.In regards to the licensing assigned to my project, check out: 
		https://www.gnu.org/licenses/quick-guide-gplv3.html

+ Set static IP on pi
+ Enable SSH interface on PI
+ SSH in (I used putty)

+ Install wiringPi: <i>sudo apt-get install wiringpi</i>

+ Install VIM (the default editor I want git to utilize): <i>sudo apt-get install vim</i>

+ Install git for repo work: <i>sudo apt-get install git-all</i>

+ Verify installation: <i>git --version</i>

+ Set global identity, every commit with have the following data baked in: <i>git config --global user.name "Your Name"</i> AND THEN: <i>git config --global user.email yourEmail@whateverdomain.com</i>

+ Set default Git Editor: <i>git config --global core.editor vim</i>

+ Check your settings: <i>git config --list</i>

+ Make a directory on your pi to store our repo: <i>sudo mkdir whateverName</i>

+ Navigate into that directory<i> cd directory/name</i>

+ Clone the repo we created earlier to our Pi: <i>sudo git clone URL-TO-YOUR-REPO</i>

+ Remember to check status of any/all your files with: <i>git status</i>

+ Initialize the repo: <i>git init</i> and then <i>git add .</i> 

+ make branch: <i>sudo git branch branchName</i>

+ switch branch: <i>sudo git branch branchName</i>

+ verify branch switch: <i> git status </i>

+ Commit: <i>git commit -m "commit comments here"</i>

