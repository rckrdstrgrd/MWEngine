cmake_minimum_required(VERSION 3.4.1)

set (mwengine_sources
    global.cpp
	drivers/adapter.cpp
	drivers/opensl_io.c
	utilities/utils.cpp
	audioengine.cpp
	audiobuffer.cpp
	audiochannel.cpp
	instruments/baseinstrument.cpp
	instruments/druminstrument.cpp
	instruments/sampledinstrument.cpp
	instruments/synthinstrument.cpp
	instruments/oscillatorproperties.cpp
	drumpattern.cpp
	events/baseaudioevent.cpp
	events/basecacheableaudioevent.cpp
	events/drumevent.cpp
	events/basesynthevent.cpp
	events/synthevent.cpp
	events/sampleevent.cpp
	processors/baseprocessor.cpp
	processors/bitcrusher.cpp
	processors/dcoffsetfilter.cpp
	processors/decimator.cpp
	processors/delay.cpp
	processors/filter.cpp
	processors/finalizer.cpp
	processors/flanger.cpp
	processors/fm.cpp
	processors/formantfilter.cpp
	processors/glitcher.cpp
	processors/limiter.cpp
	processors/lowpassfilter.cpp
	processors/lpfhpfilter.cpp
	processors/phaser.cpp
	processors/pitchshifter.cpp
	processors/tremolo.cpp
	processors/waveshaper.cpp
	generators/envelopegenerator.cpp
	generators/wavegenerator.cpp
	generators/synthesizer.cpp
	utilities/bufferutility.cpp
	utilities/levelutility.cpp
	utilities/bulkcacher.cpp
	utilities/diskwriter.cpp
	processingchain.cpp
	ringbuffer.cpp
	utilities/debug.cpp
	utilities/samplemanager.cpp
	utilities/bufferpool.cpp
	utilities/tablepool.cpp
	sequencer.cpp
	sequencercontroller.cpp
	wavetable.cpp
	utilities/fastmath.cpp
	utilities/wavereader.cpp
	utilities/wavewriter.cpp
	messaging/notifier.cpp
	messaging/observer.cpp
	modules/adsr.cpp
	modules/arpeggiator.cpp
	modules/envelopefollower.cpp
	modules/lfo.cpp
	modules/routeableoscillator.cpp
        spotifybuffer.cpp
        )


add_library(mwengine STATIC ${mwengine_sources})

target_include_directories(mwengine PRIVATE .)

target_link_libraries(mwengine PRIVATE log OpenSLES)
