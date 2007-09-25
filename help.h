/* Simple help text displayed by "show_help" */

char *help_text = "\n\
A top users display for Unix\n\
\n\
These single-character commands are available:\n\
\n\
^L      - redraw screen\n\
<sp>    - update screen\n\
C       - toggle the use of color\n\
E       - show query plan of current query (SELECT only)\n\
L       - show locks held by a process\n\
M       - sort by memory usage\n\
N       - sort by pid\n\
P       - sort by CPU usage\n\
Q       - show current query of a process\n\
T       - sort by time\n\
c       - toggle the display of process commands\n\
d       - change number of displays to show\n\
e       - list errors generated by last \"kill\" or \"renice\" command\n\
h or ?  - help; show this text\n\
i or I  - toggle the displaying of idle processes\n\
k       - kill processes; send a signal to a list of processes\n\
n or #  - change number of processes to display\n\
o       - specify sort order (%s)\n\
q       - quit\n\
r       - renice a process\n\
s       - change number of seconds to delay between updates\n\
u       - display processes for only one user (+ selects all users)\n\
\n\
Not all commands are available on all systems.\n\
";
