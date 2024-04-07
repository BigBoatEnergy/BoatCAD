
Below is a conversation on modifying the beaglebone blues access point information



to BeagleBoard

I'm trying to configure my BBB Wireless (latest kernel) w/ the latest debian image as an access point.  By default, the device is already set, as I see BeagleBone-xxxx as an wireless SSID available to connect to.  Is there somewhere I can change this SSID and password, and assign a static IP too.  I've tried making a new hostapd.conf entry on my own, but it's apparently getting overwritten somehow by the default configuration.  Any advice or link to where I can step through configuring this would be highly appreciated... thank you!  
  
Respectfully,  
Eric

![Robert Nelson's profile photo](https://lh3.googleusercontent.com/a-/AD_cMMSb76bI5kLXVCD72JysLOq1gyoHY-H5M3OCi2aQLSYSipk=s40-c)

### Robert Nelson

unread,

May 11, 2017, 6:46:45 AM

to Beagle Board, edb...@gmail.com

Hi Eric,  
  
look at:  
  
/etc/default/bb-wl18xx  

  
On Wed, May 10, 2017 at 9:06 PM, <[edb...@gmail.com](https://groups.google.com/)> wrote:  
> I'm trying to configure my BBB Wireless (latest kernel) w/ the latest debian  
> image as an access point. By default, the device is already set, as I see  
> BeagleBone-xxxx as an wireless SSID available to connect to. Is there  
> somewhere I can change this SSID and password, and assign a static IP too.  
  

USE_WL18XX_IP_PREFIX = ip subnet block  
USE_PERSONAL_SSID = BeagleBone  
USE_PERSONAL_PASSWORD = password  
USE_APPENDED_SSID = "-xxxx"  

  
  
> I've tried making a new hostapd.conf entry on my own, but it's apparently  
> getting overwritten somehow by the default configuration. Any advice or  
  

USE_GENERATED_HOSTAPD=no will defult to your custom /etc/hostapd.conf  

  
> link to where I can step through configuring this would be highly  
> appreciated... thank you!  
  

Regards,  
  
--  
Robert Nelson


