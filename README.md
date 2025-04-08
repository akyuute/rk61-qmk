# rk61-qmk

QMK firmware with a custom Vim-like layout for the wired RGB Royal Kludge
RK61 keyboard, PID 6461, based on [yutaoz/better-rk61-qmk](https://github.com/yutaoz/better-rk61-qmk).

My custom layout is specific to my needs and features grave/tilde as the
Windows key, Windows key as a modifier for a number of Vim movement keys,
and Fn as a second modifier for multimedia and mouse keys.

![The custom VimWin layout found in keymaps/vimwin](/img/vimwin_layout.png)

Please follow [these instructions](https://docs.qmk.fm/newbs) to set up
your QMK environment.

When you're ready to compile, copy the `royal_kludge` folder into
`qmk_firmware/keyboards/`.

Go to the qmk_firmware directory and run `$ qmk compile -kb
royal_kludge/rk61 -km vimwin`.

Then run `$ qmk flash royal_kludge_rk61_custom.bin` and press the DFU
button underneath the spacebar for a few seconds.

Replug the keyboard and you'll be ready to go! (Maybe...)

I don't know much at all about microcontrollers and pinouts, so I'm not
the person to ask for help with implementing RGB and other features.
I just found yutaoz's code for my version of this
keyboard and began making my preferred layout.
