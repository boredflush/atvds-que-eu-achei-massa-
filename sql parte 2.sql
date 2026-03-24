START TRANSACTION;

	INSERT INTO Endereco (logra, cidade, numero, cep) VALUES
('Rua pao de batata', 'Recife', 666, 58000000);

#COMMIT;

	ROLLBACK;

	SET autocommit= 0;

	SELECT * FROM Endereco;
    #count, avg,min,max >ou <,e muits outros
    









