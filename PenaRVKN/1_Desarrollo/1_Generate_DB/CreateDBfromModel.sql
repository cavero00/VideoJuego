# Tabla de los datos de las personas

CREATE TABLE datos_personas (
	id_nombre VARCHAR(50) DEFAULT NULL,
	a_pagar INT DEFAULT NULL,
	local_pagado VARCHAR(7) DEFAULT 'FALSE',
	bebida_pagada VARCHAR(7) DEFAULT 'FALSE',
	alcohol_1 VARCHAR(20) DEFAULT NULL,
	mezcla_1 VARCHAR(20) DEFAULT NULL,
	alcohol_2 VARCHAR(20) DEFAULT NULL,
	mezcla_2 VARCHAR(20) DEFAULT NULL,
	dias_totales INT DEFAULT NULL,
	dias_alcohol_1 INT DEFAULT NULL,
	dias_alcohol_2 INT DEFAULT NULL,
	dias_cerveza INT DEFAULT NULL,
	dias_NO_alcohol INT DEFAULT NULL
)
ENGINE=InnoDB;
