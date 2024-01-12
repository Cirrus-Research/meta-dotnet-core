###################################################################################################
# Contains the URL and checksums to download version 7.0 of the ARM 64-bit .Net Core runtime
# from Microsoft.
# Copyright Sequent Logic 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/39e79317-94d1-4e57-bb90-d5e004f4f3d4/cdcf3c0d8dc2560dcfcb160acb193785/dotnet-runtime-8.0.1-linux-arm64.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "9fb76cfac960861abe93527420900c67"
SRC_URI[sha256sum] = "8792667a46bd1c9355cbf1c8a4b3645732c544e2eb930ad836faa1e618cb0e0a"

