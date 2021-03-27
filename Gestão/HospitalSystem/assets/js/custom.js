(function ($) {
    "use strict";
    var mainApp = {

        main_fun: function () {
            /*====================================
            METIS MENU 
            ======================================*/
            $('#main-menu').metisMenu();

            /*====================================
          LOAD APPROPRIATE MENU BAR
       ======================================*/
            $(window).bind("load resize", function () {
                if ($(this).width() < 768) {
                    $('div.sidebar-collapse').addClass('collapse')
                } else {
                    $('div.sidebar-collapse').removeClass('collapse')
                }
            });



        },

        initialization: function () {
            mainApp.main_fun();

        }

    }
    // Initializing ///

    $(document).ready(function () {
        mainApp.main_fun();
    });

}(jQuery));

// method Jquery 
$(".table-index-medicoativo thead").click(function () {
    window.location.href = "medicos_ativos.php";
});

// method Jquery 
$(".table-index-pacienteativo thead").click(function () {
    window.location.href = "pacientes_ativos.php";
});




// method Jquery para atualizar medico na tabela
$(".table-ativos-medicos tr").click(function () {
    var id = $(this).closest('tr').attr('id');
    window.location.href = "atualizar_medico.php?id=" + id;
});



// method Jquery para atualizar Paciente na tabela
$(".table-ativos-pacientes tr").click(function () {
    var id = $(this).closest('tr').attr('id');
    window.location.href = "atualizar_paciente.php?id=" + id;
});

// method Jquery para atualizar Paciente na tabela
$(".table-ativos-consultas tr").click(function () {
    var id = $(this).closest('tr').attr('id');
    window.location.href = "atualizar_consulta.php?id=" + id;
});

// method Jquery para remover Paciente de tabela
$(".table_ativos").on('click', '.deletePaciente', function () {
    if (confirm("Tem certeza que deseja remover o cadastro desse paciente?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdPaciente.php?id=" + id;
    } else {
        window.location.href = "pacientes_ativos.php";
    }
});

$(".table_ativos").on('click', '.deleteMedico', function () {
    if (confirm("Tem certeza que deseja remover o cadastro desse médico?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdMedico.php?id=" + id;
    } else {
        window.location.href = "medicos_ativos.php";
    }
});


$(".table_ativos").on('click', '.delete_consulta', function () {
    if (confirm("Tem certeza que deseja remover a consulta desse paciente?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdconsulta.php?id=" + id;
    } else {
        window.location.href = "consulta.php";
    }
});

document.querySelector("#Logout").addEventListener('click', e => {
    e.preventDefault();
    window.location.href = "login.php";
});