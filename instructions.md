<h1>instructions</h1>
<h3>parts list</h3>
<h4>3d printed parts</h4>
  <li>1 x <b>3d printed case</b></li>
  <li>2 x <b>3d printed encoder knobs</b></li>
<h4>mounting hardware</h4>
  <li>4 x <b>m3 x 16mm screws</b></li>
  <li>4 x <b>m3 x 5mm x 4mm heatset inserts</b></li>
<h4>pcbs and whatnot</h4>
  <li>1 x <b>el que llora pcb</b></li>
  <li>2 x <b>seeed studio xiao rp2040</b></li>
  <li>4 x <b>1n4148 do-35 through-hole diodes</b></li>
  <li>1 x <b>0.91-inch oled display with pinout (GND - VCC - SCL - SDA)</b></li>
  <li>2 x <b>ec11 rotary encoders</b></li>
  <li>6 x <b>sk6812 mini-e leds</b></li>
  <li>4 x <b>mx-style switches</b></li>
  <li>4 x <b>keycaps of your choice</b></li>
<hr>
<h3>assembling the pcb</h3>
<ol>
<li>position the <b>seeed studio xiao rp2040</b> onto its corresponding footprint on the front of the pcb.</li>
<li>solder each corner pad to ensure stability when soldering.</li>
<li>solder the rest of the microcontroller pads down.</li>
<br \>
<li>bend the legs of the <b>1n4148 do-35 through-hole diodes</b> to a 90 degree angle and feed them through the corresponding diode holes on the front of the pcb with the red band facing upwards.</li>
<li>solder the diodes down from the back of the pcb.</li>
<br \>
<li>solder a 4-pin header onto the <b>0.91-inch oled display</b> with the short end going up the back of the display's pcb.</li>
<li>solder the short end of the header from the top of the display's pcb.</li>
<li>slot the long end of the header through the corresponding footprint on the pcb with the display facing towards the microcontroller.</li>
<li>solder the header down from the back of the pcb.</li>
<br \>
<li>slot the <b>ec11 rotary encoders</b> in through their corresponding footprints on the front of the pcb.</li>
<li>solder the pins down from the back of the pcb.</li>
<br \>
<li>position the <b>sk6812 mini-e leds</b> on their corresponding footprints on the back of the pcb with the notched corner facing the arrow on the back of the pcb.</li>
<li>solder the leds down from the back of the pcb.</li>
<br \>
<li>position the <b>mx-style switches</b> in their corresponding footprints on the front of the pcb.</li>
<li>solder the switches down from the back of the pcb.</li>
</ol>

<h3>assembling the rest of the board</h3>
<ol>
<li>position your <b>m3 x 5mm x 4mm heatset inserts</b> over each standoff on the <b>3d printed case.</b></li>
<li>use a soldering iron to push the inserts through the standoff holes and stop when the insert is flush with the top of the standoff.</li>
<br \>
<li>position each <b>m3 x 16mm screw</b> through the holes of the completed pcb and over each standoff of the case.</li>
<li>screw the pcb down firmly.</li>
</ol>

<h3>flashing the firmware</h3>
<ol>
<li>download the firmware from the github repo.</li>
<br \>
<li>hold the boot button on the <b>seeed studio xiao rp2040 and plug in a usb-c whilst still holding the button.</b></li>
<li>release the button when the device is recognised.</li>
<br \>
<li>use the file explorer of your choice to find the microcontroller acting like a usb device.</li>
<li>drag and drop the downloaded firmware onto the usb device.</li>
<br \>
<li>the firmware will flash itself from there.</li>
</ol>
<br \>
and voila, you have a macropad!
