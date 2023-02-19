# Manchester-and-Differential-Manchester-Encoding

### Manchester encoding is a clock encoding technique used by the physical layer to encode the clock and bit stream of data. A Manchester encoded signal contains frequent level transitions that allow the receiver to extract the clock signal and correctly decode the value and timing of each bit. Manchester encoding and decoding is usually implemented using programmable  devices such as AVR and PIC. 
### Differential encoding is a technique used to provide unambiguous signal reception when using some types of modulation. It makes data to be transmitted to depend not only on the current signal state (or symbol), but also on the previous one. Main purpose of Differential Encoding is to protect against polarity reversals of input bit sequences. Hence, Differentially Encoded data sequences have a slightly superior error performance. Differential Encoding is also used to provide a way to decode a BPSK signal, called DEBPSK or DPSK.

This project presents a implementation and design of Manchester and Differential Manchester encoding by using c++. In this, the sequence of encoded bits for both types of 
encoding are displayed after giving the required bits sequence as an input. 

1.1. Manchester encoding is an algorithm used in computer networking to digitally encode data bits. With Manchester encoding, data bits are represented in a series of different stages, which occur in a logical sequence.

1.2. Manchester encoding is a synchronous clock encoding technique used by the physical layer of the Open System Interconnection [OSI] to encode the clock and data of a synchronous bit stream.
In data communication, different encoding techniques are introduced for security of data and fast transmission. 
Manchester encoding is one such digital encoding technique. It is quite different from other digital encoding techniques because each data bit length is fixed by default.
The bit state is determined according to the transition direction. Different systems represent bit status in different ways, but most systems represent 1 bit against low 
to high transition and 0 bit for high to low transition.
                              
 
Signaling synchronization is the major advantage of Manchester encoding. Synchronization of signals provides higher reliability with the same data rate compared to other 
methods. But programmers should note that Manchester encoding has some disadvantages too. For example, the Manchester encoded signal consumes more bandwidth than the 
original signal.
2. Differential Manchester encoding is a differential encoding technology, using the presence or absence of transitions to indicate logical value. An improvement to 
Manchester coding which is a special case of binary phase-shift keying, it is not necessary to know the initial polarity of the transmitted message signal, 
because the information is not represented by the absolute voltage levels but by their transitions.
                            
                                                                    

