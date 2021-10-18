# Discuss an embedded device.

Eye Movement Desensitization and Reprocessing (EMDR) is a pychotherapy to help people heal from emotional distress.

External stimuli are used in the process of this therapy.  These external stimuli can be eye motion, pressure, and/or sound.

An embedded device could be used to provide these stimuli (not simultaneously) through, moving LEDs, vibration transducers, or speakers.

The therapist would need to select the type of stimuli and some settings.
For light, the settings could be color and speed.
For vibration, the settings could be duration and interval.
For sound, the settings could be tone, volume, duration, and interval.
It would be nice to be able to keep track of these setting on a per-client basis.
Additionally, how long the EMDR session would also need to be set.

For security reasons, it would be nice that no client information is actually present on device.
Setting information, if it is disassociated with the client name is ok to be on there.

Connectivity - It would actually be better to not provide WiFi access.  If so, it would need to be done securly.
Memory - Should not be too high, as only the current settings and information for the current stimuli would be needed.
Program Installation and Access - this should be done at the factory, the user would not be expected to perform this.  Updates should be minimal.
Power - Therapists might visit clients in Hospital or other facilities besides their offices.  Portability, and thus battery power, needs to be considered.  One might need larger batteries for vibration devices.
Trouble Shooting - the system should be fairly simple, with little to trouble shoot.
Testibility - Testing may be difficult without tools that can track LEDs and measure timing.
Response - Other than start and stop, no other response needs to be taken into account during the session.  No time critical inputs are needed.
