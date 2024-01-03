((content) @injection.content
	(#set! injection.language "html")
	(#set! injection.combined))

((percent_code) @injection.content
	(#set! injection.language "perl+treesitter")
	(#set! injection.combined))

((code) @injection.content
	(#set! injection.language "perl+treesitter") )
