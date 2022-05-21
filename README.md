<!--<?xml version="1.0" encoding="UTF-16"?>-->
<h1>R2R Digital to Analog Converter using Arduino</h1>
<p align="left">
    <a alt="License" href="https://github.com/knedl1k/R2R_Arduino/blob/main/LICENSE">
        <img src="https://img.shields.io/badge/License-GNU%20v3.0-informational"/></a>
    <img src="https://img.shields.io/badge/HW-Arduino-brightgreen"/>
</p>
<i>Digital to Analog Converters (DACs) are used within transfers of binary signals to analog signals. The resolution of
    the DAC is determined by the number of possible output voltage values. These depend on the number of bits of the
    input data word. To calculate it, divide the output voltage range by (2n -1), where n is the number of bits of the
    input word - binary signal. DACs are commonly used in digital power supplies, programmable generators or automation
    technology.</i>
<br>
<h2>Wiring</h2>
<img src="illustration/wiring.png">

The type of Arduino is not important, it only affects how many outputs are usable as outputs of the binary signal.
<br>
<h2>Used parts</h2>
<table>
    <thead>
    <tr>
        <th style="text-align: center">name</th>
        <th style="text-align: center">pieces</th>
        <th style="text-align: center">description</th>
    </tr>
    </thead>
    <tbody>
    <tr>
        <td style="text-align: center">resistor</td>
        <td style="text-align: center">?</td>
        <td style="text-align: center">220 k&#8486;</td>
    </tr>
    <tr>
        <td style="text-align: center">operation amplifier</td>
        <td style="text-align: center">1</td>
        <td style="text-align: center">no gain</td>
    </tr>
    <tr>
        <td style="text-align: center">Arduino</td>
        <td style="text-align: center">1</td>
    </tr>
    <tr>
        <td style="text-align: center">wires</td>
        <td style="text-align: center">?</td>
        <td style="text-align: center">copper</td>
    </tr>
    <tr>
        <td style="text-align: center">breadboard</td>
        <td style="text-align: center">1</td>
    </tr>
    </tbody>
</table>
<br>
<h2>Recognized parametrs of DACs</h2>
<ul>
    <li><b>Accuracy of the conversion</b> depends on the stability of the reference voltage, on the accuracy of the
        components (resistors and switches) and is also determined by the size (number of bits) of the converted word -
        of the binary signal
    </li>
    <li><b>Conversion rate</b> defines the number of input words converted to analog value per unit time</li>
    <li><b>Resolution</b> tells how many values the output signal can be (if we have a 3-bit converter, then there can
        be 2<sup>3</sup> different values at the output = this corresponds to the resolution <sup>100</sup> &frasl;<sub>8</sub>
        = 12.5 %
    </li>
</ul>
<h2>Real DACs errors</h2>
<ul>
    <li><b>Quantization error</b> cannot be removed, it is an error caused by the resolution of the converter
        (=rounding)
    </li>
    <li><b>Zero Offset or Drift</b> is a state when the output is a non-zero with a grounded input (or when there's
        a zero output with a non-zero input)
    </li>
    <li><b>Non-linearity error</b> means the shape of the average characteristic of a real DAC is not a straight line
    </li>
    <li><b>Quality</b> of reference voltage source U<sub>ref</sub> and quality of used resistors</li>
</ul>
<h2>R2R DAC &mdash; parallel Digital to Analog Converter</h2>
<p>Basically, it is a summing amplifier (input resistors that are in parallel go to the inverting input of an
    operational amplifier that
    has negative feedback). Using the input controlled switches, we apply a constant reference voltage to the input
    resistors to be converted. The resistor values range from 2<sup>n-1</sup>R, which is referred to as <b>LSB</b>, to 2<sup>0</sup>R,
    which is referred
    to as <b>MSB</b>. MOSFET transistors are most often used as switches because they meet the required characteristics
    - not
    to introduce error into the conversion (when not switched they have infinite resistance and when switched they have
    very low resistance, ideally zero). Parallel DACs are quite expensive (because of the quality and values of the
    resistors, or the number of them), but they are fast and accurate.</p>
<br>
<h2>License</h2>
GNU General Public License v3.0
<br><br>
©2022 knedl1k
