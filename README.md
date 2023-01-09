# Zircon on the Allwinner A64

## Memory 
https://linux-sunxi.org/A64/Memory_map  

`0x40000000`
	
`0xFFFFFFFF`	

DRAM space, up to 3GiB. 

* MMU is also known as the Memory Management Unit 
* GIC is also known as the generic interrupt controller 
* In a zircon boot shim, paddr means the physical address of a piece of hardware on the board. Check a memory map for addresses. 

## Uart
* https://cs.opensource.google/fuchsia/fuchsia/+/main:src/devices/serial/drivers/uart16550 Pinephone uart chip 
* Uart device with an MMIO range at 0x01c28000 with length 0x400 

## Unrelated notes 

### Health check 

The health check is basically a point during the boot where we assert we successfully booted into fuchsia and the image is good. https://fuchsia.dev/fuchsia-src/concepts/packages/ota?hl=en#committing-update  

 

 
