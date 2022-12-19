

$(document).ready(function  () {
	var alto = $( document ).height();
	$( ".window" ).draggable();
	$( "#note" ).draggable();
	$('.DeskCalcu').hide();
	$('.DeskNote').hide();
	$('.window').hide();

	$('.calculadora').click(function(){
		$('html').css("background","#303030");
		alert(alto);
		$('.window').hide();
		$('.contenedor2').hide();
		$('.wrap').hide();
		$('.DeskCalcu').show();
	});

	$('#imgback').click(function(){
		$('html').css("background","#004050");
		$('.window').hide();
		$('.DeskCalcu').hide();
		$('.contenedor2').show();
		$('.wrap').show();
	});

	$('.windows').click(function(){
		$('html').css("background","#fcf");
		$('.window').hide();
		$('.DeskCalcu').hide();
		$('.contenedor2').hide();
		$('.wrap').hide();
		$('#note').show();
		$('.DeskNote').show();
	});

	$('#inicio-button').click(function(){
		$('html').css("background","#004050");
		$('.DeskCalcu').hide();
		$('.DeskNote').hide();
		$('.contenedor2').show();
		$('.wrap').show();
	});

	$('#usuario').click(function(){
		$('html').css("background","#fcf");
		$('#note').hide();
		$('.DeskCalcu').hide();
		$('.contenedor2').hide();
		$('.wrap').hide();
		$('.DeskNote').show();
		$('.window').show();
	});

	$('.close').click(function(){
		$('.window').hide();
	});

	
});
