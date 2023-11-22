###################################################################################################
# Contains the URL and checksums to download version 7.0 of the ARM .Net Core runtime from
# Microsoft.
# Copyright Sequent Logic 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/ee0a9245-5b87-4217-a9a5-dc589187612e/f3631cfe19cb713296314a6028a9e856/dotnet-runtime-8.0.0-linux-arm.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "d95bfbbdbb5549646fd19070018c8641"
SRC_URI[sha256sum] = "57dda8db012344c4d6a7f25db564bc4cb32c6b158e7daedb9532c6204015f386"
